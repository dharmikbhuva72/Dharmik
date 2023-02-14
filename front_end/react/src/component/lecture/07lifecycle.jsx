import React, { Component } from 'react';

class lifecycle extends Component {
    constructor() {
        super();
        console.log("consteucter called")
        this.state ={counter:0}

    }

    // componentWillMount() {

    // }

    componentDidMount() {
        setTimeout(()=>{
            console.log("componentDidMount")
        },2000)
    }

    // componentWillReceiveProps(nextProps) {

    // }

    shouldComponentUpdate(nextProps, nextState) {
       console.log("shouldComponentUpdate")
       console.log("nextProps",nextProps)
       console.log("nextState",nextState)
       return true;
    }

    // componentWillUpdate(nextProps, nextState) {

    // }

    componentDidUpdate(prevProps, prevState) {
        console.log("componentDidUpdate")
        console.log("prevProps",prevProps)
        console.log("prevState",prevState)
    }

    componentWillUnmount() {
       console.log("componentWillUnmount")
    }
    btnclick=()=>{
        console.log("btn click")
        this.setState({counter:this.state.counter+1})
    }
    btnclk=()=>{
        console.log("btn click")
        this.setState({counter:this.state.counter-1})
    }
    
    btclk=()=>{
        console.log("btn click")
        this.setState({counter:this.state.counter=0})
    }
    render() {
        return (
            <div className='container'>
               <div className="row">
                <div className="col">
                    <input type="text" value={this.state.counter}/>
                    <button className="btn btn-primary" onClick={this.btnclick}>Increment</button>
                    <button className="btn btn-primary" onClick={this.btnclk}>Decrement</button>
                    <button className="btn btn-primary" onClick={this.btclk}>Reset</button>
                </div>
               </div>
            </div>
        );
    }
}

// lifecycle.propTypes = {

// };

export default lifecycle;