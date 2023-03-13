import React, {useState,useEffect,useLayoutEffect} from 'react'; 
import './11style.css'

function UseEffect(props) {

    const[data,setdata]=useState()
    const[loader,setloader]=useState(true)

    useLayoutEffect(()=>{
        setTimeout(()=>{
            setloader(false)
        },4000)
    })

    useEffect(()=>{
        setTimeout(()=>{
            fetch("https://jsonplaceholder.typicode.com/posts").then((res)=>res.json()).then((Response)=>{
                console.log(Response);
                setdata(Response)
            }).catch((Errer)=>{
                console.log(Errer);
            })
        },2000)
    },[])

    return (
        <>
        <div className="container">
            <div className="row mt-5">
                <div className="col">
                    {/* {loader}
                    {Object.entries(data).map((item,i)=>{
                        return <li key={i}>{item[1].body}</li>
                    })} */}

                    {
                        loader == false ? 
                        <>
                        <table className='table table-bordered'>
                            <thead>
                                <tr>
                                    <th>UserId</th>
                                    <th>Id</th>
                                    <th>Title</th>
                                    <th>Body</th>
                                </tr>
                            </thead>
                            {data.map((res)=>{
                              return<tbody key={res.id}>
                              <tr>
                                  <td>{res.userId}</td>
                                  <td>{res.id}</td>
                                  <td>{res.title}</td>
                                  <td>{res.body}</td>
                              </tr>
                          </tbody>
                            })}
                        </table>
                        </>: 
                        <>
                        <div className="loadingio-spinner-spinner-55ehyfwjyc6 hg"><div className="ldio-0cl9kd0wv85r">
                            <div></div><div></div><div></div><div></div><div></div><div></div><div></div>
                            <div></div><div></div><div></div><div></div><div></div>
                            </div>
                        </div>
                        <table className='table table-bordered'>
                            <thead>
                                <tr>
                                    <th>UserId</th>
                                     <th>Id</th>
                                    <th>Title</th>
                                    <th>Body</th>
                                </tr>
                            </thead>
                        </table>
                        </>
                    }
                </div>
            </div>
        </div>
        </>
    );
}

export default UseEffect;