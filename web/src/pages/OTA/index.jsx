import './style.css';

export function OTA() {
  return (
      <>
        <h2 class="text-3xl font-semibold mb-4 text-[#333333]">Updates</h2>
        <form method="post" action="/ota" class="flex flex-col gap-4 w-full max-w-md border-b border-[#CCCCCC] pb-4">
          <div>
            <label for="channel" class="block font-medium text-[#333333]">Update Channel</label>
            <select id="channel" name="channel" class="input-field">
              <option value="stable">Stable</option>
              <option value="nightly">Nightly</option>
            </select>
          </div>

          <div>
            <span class="block font-medium text-[#333333]">Current version</span>
            <span class="display-field">
                %BUILD_VERSION%
            </span>
          </div>

          <div>
            <span class="block font-medium text-[#333333]">Newest version</span>
            <span class="display-field">
                v%LATEST_VERSION% <span class="font-bold">%UPDATE_AVAILABLE%</span>
            </span>
          </div>

          <div class="flex justify-center mt-6 flex-row gap-1">
            <a href="/" class="menu-button">Back</a>
            <button type="submit" class="menu-button">Save Preferences</button>
            <input type="submit" name="update" class="menu-button" value="Update"/>
          </div>
        </form>
      </>
  );
}
