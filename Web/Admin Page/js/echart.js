document.addEventListener('DOMContentLoaded',() => {
    new ApexCharts(document.querySelector('#reportchart'),{
        series:{
            {
                name: 'Sales',
                data: [31,40,28,51,42,82,56],
            },
            {name: 'Revenue',
             data: [11,32,45,32,34,52,41],

            },
        },chart:{
            height:

        }
    })
})