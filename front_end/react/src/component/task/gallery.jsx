import React, { Component } from 'react'
import Regallery from "./regallery"
export default class gallery extends Component {
constructor()
{
    super();
    let a = this.state={a1:"images/s1.jpg",a2:"images/s2.jpg",a3:"images/s3.jpg",a4:"images/s4.jpg"}
    console.log(a)
}

    // xyz=()=>{
    //     let f = this.setState=({a1:"images/s4.jpg",a2:"images/s2.jpg",a3:"images/s3.jpg",a4:"images/s3.jpg"})
    //     console.log(f);

    // }

     demo=()=>
    {
        this.setState({a1:"images/s4.jpg"})
    }
    

render() {
    return(
      <>
        <div className="container mt-5">
            <div className="row">
                <div className="col-3 me-2" style={{width: "17rem"}}>
                    {/* <Regallery img={this.state.a1} title="Nike" oldprice="9000"  clk={()=>{this.setState({a1:"images/s2.jpg"})}} newprice="8000"/> */}
                    <Regallery img={this.state.a1} title="Nike" oldprice="9000"  clk={this.demo} newprice="8000"/>
                </div>
                <div className="col-3 me-2  " style={{width: "17rem"}}>
                    <Regallery img={this.state.a2} title="sport" oldprice="5000" clk={()=>{this.setState({a2:"images/s3.jpg"})}} newprice="4000"/>
                </div>
                <div className="col-3 me-2" style={{width: "17rem"}}>
                    <Regallery img={this.state.a3} title="Puma" oldprice="7000" clk={this.xyz} newprice="6000"/>   
                </div>
                <div className="col-3 me-2" style={{width: "17rem"}}>
                    <Regallery img={this.state.a4} title="Skecher" oldprice="8000" clk={this.xyz} newprice="7000 "/>
                </div>
            </div>
        </div>
      </>
    )
  }
}