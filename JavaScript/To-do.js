const todo = [];

function addToDO() {
   const task = document.querySelector('.js-name');
   const name = task.value ;
   todo.push(task);
   console.log(todo);
}