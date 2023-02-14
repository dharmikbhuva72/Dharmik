import React, { Component } from 'react'

export default class lunch extends Component {
  constructor()
  {
    super();
    this.state={a1:"",a2:"",a3:"",a4:"",a5:""}
  }

  guj=()=>
  {
    this.setState({a1:"xyx",a2:"djvh",a3:"dcuugs",a4:"eidcgub",a5:"edhgsx"})
  }
  south=()=>
  {
    this.setState({a1:"xhdbisabyx",a2:"djvh",a3:"dcuugs",a4:"eidcgub",a5:"edhgsx"})
  }
  pun=()=>
  {
    this.setState({a1:"hdbs",a2:"djvh",a3:"dcuugs",a4:"eidcgub",a5:"edhgsx"})
  }
  render() {
    return (
      <>
      <div className='main' >
      <button className="guj btn btn-primary " onClick={this.guj}>Gujrati</button>
                <button className="south btn btn-success " onClick={this.south}>South Indian</button>
                <button className="ounjab btn btn-danger " onClick={this.pun}>Panjabi</button>


                <ul>
                  <li>{this.state.a1}</li>
                  <li>{this.state.a2}</li>
                  <li>{this.state.a3}</li>
                  <li>{this.state.a4}</li>
                  <li>{this.state.a5}</li>
                </ul>
      </div>
      </>
    )
  }
}
