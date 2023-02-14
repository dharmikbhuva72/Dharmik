import React, { Component } from 'react'
import Restate from "./02restateprli"
export default class stateproplife extends Component {

    constructor()
    {
        super();
        this.state={a1:"images/dhoni1.jpg",a2:"images/kohli1.jpg",a3:"images/sky1.jpg",a4:"images/rishabh1.jpg",
                    b1:"ODI", c1:"10",c2:"46",c3:"0",c4:"1",d1:"73",d2:"64",d3:"2",d4:"5"}
    }

    componentDidMount()
    {
        // 
            
        //     this.state={a1:"images/dhoni1.jpg",a2:"images/kohli1.jpg",a3:"images/sky1.jpg",a4:"images/rishabh1.jpg",
        //             b1:"ODI", c1:"10",c2:"46",c3:"0",c4:"1",d1:"73",d2:"64",d3:"2",d4:"5"}
        // },2000)
        setTimeout(()=>{
        fetch('https://jsonplaceholder.typicode.com/posts').then(res=>res.json()).then((Res)=>{
            console.log(Res);
        })
    },2000)
    }

    demo=()=>{
        console.log("btncalld")
        setTimeout(()=>{
        this.setState({a1:"images/dhoni2.jpg",a2:"images/kohli2.jpg",a3:"images/sky2.jpg",a4:"images/rishabh2.jpg",
                        b1:"T20", c1:"10",c2:"46",c3:"0",c4:"1",d1:"73",d2:"64",d3:"2",d4:"5"})
        },2000)
    }

render() {
    return(
      <>
      <div className="container">
        <div className="row">
        <div className="col-3 me-2" style={{width: "17rem"}}>
            <Restate img={this.state.a1} name="MS Dhoni" formate={this.state.b1} sen={this.state.c1} fif={this.state.d1} clk={this.demo} />
        </div>
        <div className="col-3 me-2" style={{width: "17rem"}} >
        <Restate img={this.state.a2} name="Virat Kohli" formate={this.state.b1} sen={this.state.c2} fif={this.state.d2}  />
        </div>
        <div className="col-3 me-2" style={{width: "17rem"}} >
        <Restate img={this.state.a3} name="Suryakumar Yadav" formate={this.state.b1} sen={this.state.c3} fif={this.state.d3}  />
        </div>
        <div className="col-3 me-2" style={{width: "17rem"}}>
        <Restate img={this.state.a4} name="Rishabh Pant " formate={this.state.b1} sen={this.state.c4} fif={this.state.d4}  />
        </div>
        </div>
      </div>
        
      </>
    )
  }
}