import React, { Component } from 'react';
import Recompo from "./06recompo"
class Compo extends Component {
    render() {
        return (
        <div className='container'>
            <div className='row'>
            <div style={{width: "17rem"}}>
                <Recompo img="images/s1.jpg" title="Nike" oldprice="9000" newprice="8000" />      
            </div>
            <div style={{width: "17rem"}}>
            <Recompo img="images/s2.jpg" title="sport" oldprice="5000" newprice="4000" />
            </div>
            <div style={{width: "17rem"}}>
            <Recompo img="images/s3.jpg" title="puma" oldprice="7000" newprice="6000" />
            </div>
            <div style={{width: "17rem"}}>
            <Recompo img="images/s4.jpg" title="skechers" oldprice="8000" newprice="7000" />
            </div>
          </div>
        </div> 
        );
    }
}

export default Compo;