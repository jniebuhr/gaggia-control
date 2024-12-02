import './style.css';
import {useQuery} from 'preact-fetching';
import {Spinner} from '../../components/Spinner.jsx';
import {useState, useEffect, useCallback, useRef} from 'preact/hooks';

export function Settings() {
  const [submitting, setSubmitting] = useState(false);
  const [gen, setGen] = useState(0);
  const [formData, setFormData] = useState({});
  const { isLoading, isError, error, data: fetchedSettings } = useQuery(`settings/${gen}`, async () => {
    const response = await fetch(`/api/settings`);
    const data = await response.json();
    return data;
  });

  const formRef = useRef();

  useEffect(() => {
    setFormData(fetchedSettings || {});
  }, [fetchedSettings]);

  const onChange = (key) => {
    return (e) => {
      let value = e.currentTarget.value;
      if (key === 'homekit') {
        value = !formData.homekit;
      }
      setFormData({
        ...formData,
        [key]: value
      })
    };
  }

  const onSubmit = useCallback(async(e) => {
    e.preventDefault();
    setSubmitting(true);
    const form = formRef.current;
    const response = await fetch(form.action, {method:'post', body: new FormData(form)});
    const data = await response.json();
    setFormData(data);
    setSubmitting(false);
  }, [setFormData, formRef]);


  if (isLoading) {
    return (
        <div class="p-16 flex flex-row items-center">
          <Spinner size={8} />
        </div>
    )
  }

  return (
      <>
        <h2 class="text-3xl font-semibold mb-4 text-[#333333]">Settings</h2>

        <form ref={formRef} method="post" action="/api/settings" class="flex flex-col gap-4 w-full max-w-md border-b border-[#CCCCCC] pb-4" onSubmit={onSubmit}>
          <div>
            <b>User Preferences</b>
          </div>
          <div>
            <label for="startup-mode" class="block font-medium text-[#333333]">Startup Mode</label>
            <select id="startup-mode" name="startupMode" class="input-field" onChange={onChange('startupMode')}>
              <option value="standby" selected={formData.startupMode === 'standby'}>Standby</option>
              <option value="brew" selected={formData.startupMode === 'brew'}>Brew</option>
            </select>
          </div>

          <div>
            <label for="targetDuration" class="block font-medium text-[#333333]">Default Duration (sec)</label>
            <input id="targetDuration" name="targetDuration" type="number" class="input-field" placeholder="30" value={formData.targetDuration} onChange={onChange('targetDuration')} />
          </div>

          <div>
            <label for="targetBrewTemp" class="block font-medium text-[#333333]">Default Brew Temperature (°C)</label>
            <input id="targetBrewTemp" name="targetBrewTemp" type="number" class="input-field" placeholder="93" value={formData.targetBrewTemp} onChange={onChange('targetBrewTemp')} />
          </div>

          <div>
            <label for="targetSteamTemp" class="block font-medium text-[#333333]">Default Steam Temperature (°C)</label>
            <input id="targetSteamTemp" name="targetSteamTemp" type="number" class="input-field" placeholder="135" value={formData.targetSteamTemp} onChange={onChange('targetSteamTemp')} />
          </div>

          <div>
            <label for="targetWaterTemp" class="block font-medium text-[#333333]">Default Water Temperature (°C)</label>
            <input id="targetWaterTemp" name="targetWaterTemp" type="number" class="input-field" placeholder="80" value={formData.targetWaterTemp} onChange={onChange('targetWaterTemp')} />
          </div>

          <div>
            <label for="temperatureOffset" class="block font-medium text-[#333333]">Temperature Offset (°C)</label>
            <input id="temperatureOffset" name="temperatureOffset" type="number" class="input-field" placeholder="0" value={formData.temperatureOffset} onChange={onChange('temperatureOffset')} />
          </div>

          <div>
            <b>Integrations</b>
          </div>

          <div class="flex flex-row items-center gap-4">
            <label class="relative inline-flex items-center cursor-pointer">
              <input id="homekit" name="homekit" value="homekit" type="checkbox" class="sr-only peer" checked={!!formData.homekit} onChange={onChange('homekit')} />
              <div
                  class="w-9 h-5 bg-gray-200 peer-focus:outline-none peer-focus:ring-4 peer-focus:ring-blue-300 dark:peer-focus:ring-blue-800 rounded-full peer dark:bg-gray-700 peer-checked:after:translate-x-full peer-checked:after:border-white after:content-[''] after:absolute after:top-[2px] after:left-[2px] after:bg-white after:border-gray-300 after:border after:rounded-full after:h-4 after:w-4 after:transition-all dark:border-gray-600 peer-checked:bg-blue-600"></div>
            </label>
            <p>Homekit</p>
          </div>

          <div>
            <b>System Settings</b>
            <label for="wifiSsid" class="block font-medium text-[#333333]">WiFi SSID</label>
            <input id="wifiSsid" name="wifiSsid" type="text" class="input-field" placeholder="WiFi SSID" value={formData.wifiSsid} onChange={onChange('wifiSsid')} />
          </div>
          <div>
            <label for="wifiPassword" class="block font-medium text-[#333333]">WiFi Password</label>
            <input id="wifiPassword" name="wifiPassword" type="password" class="input-field" placeholder="WiFi Password" value={formData.wifiPassword} onChange={onChange('wifiPassword')} />
          </div>
          <div>
            <label for="mdnsName" class="block font-medium text-[#333333]">Hostname</label>
            <input id="mdnsName" name="mdnsName" type="text" class="input-field" placeholder="Hostname" value={formData.mdnsName} onChange={onChange('mdnsName')} />
          </div>
          <div>
            <label for="pid" class="block font-medium text-[#333333]">PID Values (Kp, Ki, Kd)</label>
            <input id="pid" name="pid" type="text" class="input-field" placeholder="2.0, 0.1, 0.01" value={formData.pid} onChange={onChange('pid')} />
          </div>

          <div class="text-sm text-[#666666]">
            Some options like WiFi, NTP or integrations require a restart.
          </div>

          <div class="flex justify-center mt-6 flex-row gap-1">
            <a href="/" class="menu-button">Back</a>
            <button type="submit" class="menu-button flex flex-row gap-2" disabled={submitting}>
              Save
              {submitting && <Spinner size={4} />}
            </button>
            <input type="submit" name="restart" class="menu-button" value="Save and Restart" disabled={submitting} />
          </div>
        </form>
      </>
  );
}
