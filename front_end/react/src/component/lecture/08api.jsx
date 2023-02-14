import React, { Component } from 'react';
class api extends Component {

    constructor()
    {
        super();
        console.log("constructor")
        this.state={userdata:" ",status:" Loading..."}
    }
    componentDidMount()
    {
            console.log("ComponentDidMount")
            setTimeout(()=>{
                fetch('https://jsonplaceholder.typicode.com/posts').then(res=>res.json()).then((Res)=>{
                    console.log(Res);
                    this.setState({userdata:Res,status:"Completed"})
                }).catch((Error)=>{
                    console.log(Error)
                },3000)
            })

    }   
        
    render() {
        return (
        <>
            <div className="container">
                <div className="row">
                    <div className="col">
                        {this.state.status == "Completed" ?
                        
                            <table className='table table-bordered'>
                                <thead>
                                    <tr>
                                        <th>UserId</th>
                                        <th>Id</th>
                                        <th>Title</th>
                                        <th>Body</th>
                                    </tr>
                                </thead>
                                {this.state.userdata.map(res=>(
                                    <tbody key={res.id}>
                                        <tr>
                                            <td>{res.userId}</td>
                                            <td>{res.id}</td>
                                            <td>{res.title}</td>
                                            <td>{res.body}</td>
                                        </tr>
                                    </tbody>                                    
                                ))}
                            </table>
                            :
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
                        }
                    </div>
                </div>
            </div>
        </>
        );
    }
}

export default api;