import './style.css';
import {useQuery} from 'preact-fetching';
import {Spinner} from '../../components/Spinner.jsx';
import {useState, useEffect} from 'preact/hooks';
import { signal, effect } from "@preact/signals";

const modeMap = {
  0: 'Standby',
  1: 'Brew',
  2: 'Steam',
  3: 'Water'
}

const gen = signal(0);

export function Home() {
  const [gen, setGen] = useState(0);
  effect(() => {
    const intervalId = setInterval(() => {
      gen.value ++;
    }, 1000);

    return () => {
      clearInterval(intervalId);
    };
  });
  const { isLoading, isError, error, data: status } = useQuery(`status/${gen}`, async () => {
    const response = await fetch(`/api/status`);
    const data = await response.json();
    return {
      mode: modeMap[data.mode],
      currentTemperature: data.ct,
      targetTemperature: data.tt
    };
  });
  const modeValue = isLoading ? <Spinner size={4}/> : <>{status?.mode}</>;
  const tempValue = isLoading ? <Spinner size={4}/> : <>{status?.currentTemperature}°C/{status?.targetTemperature}°C</>;
	return (
      <>
        <div className="flex flex-row justify-center mt-2 mb-2 gap-4">
          <div className="flex flex-row items-center gap-2">
            <span className="font-bold">Mode: </span>
            {modeValue}
          </div>
          <div className="flex flex-row items-center gap-2">
            <span className="font-bold">Temperature: </span>
            {tempValue}
          </div>

        </div>
        <div className="flex flex-col justify-center mt-2 mb-2">
          Welcome to the GaggiMate Web UI. Please choose one of the options below.
        </div>
        <div className="flex flex-col justify-center mt-2 mb-2 gap-2 w-full max-w-md border-b border-[#CCCCCC] pb-4">
          <a href="#" className="menu-button">
            Profiles (coming soon)
          </a>
          <a href="#" className="menu-button">
            PID Autotune (coming soon)
          </a>
          <a href="/settings" className="menu-button">
            Settings
          </a>
          <a href="/ota" className="menu-button">
            Updates
          </a>
          <a href="/update" className="text-xs text-center underline">Old OTA updater</a>
        </div>
      </>
  );
}