import React, { Component } from 'react'
import Reprops from "./05reprops"
export default class props extends Component {
  render() {
    return (
      <>
        <div className="container mt-5">
            <div className="row">
                <div className="col-3 me-2" style={{width: "17rem"}}>
                    <Reprops img="images/s1.jpg" title="Nike" oldprice="9000" newprice="8000"/>
                </div>
                <div className="col-3 me-2  " style={{width: "17rem"}}>
                    <Reprops img="images/s2.jpg" title="sport" oldprice="5000" newprice="4000"/>
                </div>
                <div className="col-3 me-2" style={{width: "17rem"}}>
                    <Reprops img="images/s3.jpg" title="Puma" oldprice="7000" newprice="6000"/>   
                </div>
                <div className="col-3 me-2" style={{width: "17rem"}}>
                    <Reprops img="images/s4.jpg" title="Skecher" oldprice="8000" newprice="7000 "/>
                </div>
            </div>
        </div>
      </>
    )
  }
}
