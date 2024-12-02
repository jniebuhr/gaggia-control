/** @type {import('tailwindcss').Config} */
module.exports = {
  content: ["./src/**/*.{html,js,jsx,tsx,ts}"],
  theme: {
    extend: {},
    fontFamily: {
      logo: ['Montserrat']
    }
  },
  plugins: [],
  safelist: [
    {
      pattern: /^(w|h)-.+/
    }
  ]
}
