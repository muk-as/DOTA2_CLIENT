   
                                                             
                                                                       
   
                                                
   
var get_dof_value = function(start_val, end_val, sample_ratio, a=2)
{
    var delta = end_val - start_val;
                              
    var x = sample_ratio;
    var x_a = Math.pow(x, a);
    var diff_a = Math.pow(1 - x, a);
    var y = x_a / (x_a + diff_a);

    return start_val + y * delta;
}

   
                                                                      
   
var seq;

   
                                               
   
var RunPageAnimation = function () {
    seq = new RunSequentialActions();

    $('#ModelContainer').RemoveAndDeleteChildren();
    $('#ModelContainer').BLoadLayoutSnippet('ModelSnippet');

    seq.actions.push(new WaitAction(0.0));
    seq.actions.push(new RunFunctionAction(function () { $.DispatchEvent('DOTASetCurrentDashboardPageFullscreen', false); }))
    seq.actions.push(new WaitForClassAction($('#ModelBackground'), 'SceneLoaded'));
                                                                                      

      
                       
      
       
                                                          
                          

                   
         
                                                         
                                 
                                    
                                   
                                    

                                                             
                                            
                                                               
                                                              

                                                                                                      
                                                                                                    
                                                                                                  
                                                                                                    

                                                                                                           
                                                                                                         
                                                                                                       
                                                                                                         

                
                                                                           
                                  
                               
                                 
                                            

                                      
                                      
                                       
                                        

                                     
                                     
                                    
                                      

                                                
             
                                                   

                                                            
                                                              
                                                                                               
                                                                                             
                                                                                           
                                                                                             

                                                                                                   
                                                                                                  
                                                                                                 
                                                                                                  

                                                                                                        
                                                                                                       
                                                                                                      
                                                                                                       
                   
             

                     
        
      


    seq.actions.push(new AddClassAction($.GetContextPanel(), 'BackgroundLoaded'));
    seq.actions.push(new AddClassAction($('#MainContainer'), 'Initialize'));
    seq.actions.push(new AddClassAction($('#ModelBackground'), 'Initialize'));
                                                                                 

    seq.actions.push(new WaitAction(0.0));

      
                                                    
      
    seq.actions.push(new RunFunctionAction(function () { $.DispatchEvent('DOTAGlobalSceneSetCameraEntity', 'ModelBackground', 'hero_camera_post', 2.2); }))
    seq.actions.push(new RunFunctionAction(function () { $.DispatchEvent('DOTAGlobalSceneSetRootEntity', 'ModelBackground', 'root_post'); }))
    seq.actions.push(new LerpRotateAction($('#ModelBackground'), 0, 0, 0, 0, -0.13, 0.13, -0.03, 0.03, 0.0));

                          
    RunSingleAction(seq);
}


   
                                                
                           
   
var EndPageAnimation = function () {
    if (seq != undefined) {
        seq.finish();
    }

    if ($('#MainContainer')) {
        $('#MainContainer').RemoveClass('Initialize');
    }

    if ($('#ModelBackground')) {
        $('#ModelBackground').RemoveClass('Initialize');
    }

                                  
                                                          
       
}

