import React, { useEffect, useLayoutEffect, useState } from 'react'

export default function UseEffect() {
    const[vara,setvara]=useState(0)
    const[varname,setvarname]=useState("Tops")

    useEffect(()=>{
        setTimeout(()=>{
            console.log("use called")
        },2000)
        
    })
    useLayoutEffect(()=>{
        console.log("layout called");
        // return changeData
    },[vara,varname])

    function changeData(){
        console.log("function called");
        setvara(50)
        setvarname("Tops Tech")
    }

    const[count, setcount]=useState(0)
    useEffect(()=>{
        setTimeout(()=>{
            console.log('counter called');
            console.log(document.title=`you have click ${count} times` );
        },2000)
    })

  return (
    <div>
        <div className="container">
            <div className="row">
                <div className="col">
                    <h1>{vara}</h1>
                    <button onClick={changeData} className="btn btn-success">click me</button>
                    <h1>{varname}</h1>
                    <h3>{count}</h3>
                    <button className='btn btn-primary' onClick={()=>{setcount(count+1)}}>click me</button>
                </div>
            </div>
        </div>
    </div>
  )
}
