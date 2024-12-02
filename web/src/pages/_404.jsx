export function NotFound() {
  return (
      <div class="border-b border-[#CCCCCC] pb-4 flex flex-col items-center">
        <h1 className="text-8xl font-logo my-12 font-medium">404</h1>
        <p>The page you were looking for is not available.</p>
        <a href="/" className="menu-button my-4">
          Back
        </a>
      </div>
  );
}
