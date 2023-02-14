import React from 'react';
import ReactDOM from 'react-dom/client';
import './index.css';
import "../node_modules/bootstrap5/src/css/bootstrap.min.css"
import "../node_modules/bootstrap5/src/js/bootstrap.bundle.min.js"
// import App from './App';
// import reportWebVitals from './reportWebVitals';
// import Demo from './component/demo';
import Leheader from "./component/lecture/01header"
// import Navbar from './component/practice/03navbar'
// import Header from './component/practice/04.Header';
// import Task from './component/task/01task';
// import Stst from "./component/lecture/06state"
import Style from "./component/task/01style.css"
const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(
  <React.StrictMode>
    {/* <App/> */}
    {/* <Demo /> */}
    <Leheader/>
    {/* <Navbar/> */}
    {/* <Header/> */}
    {/* <Task/> */}
    {/* <Stst/> */}
  </React.StrictMode>
);
