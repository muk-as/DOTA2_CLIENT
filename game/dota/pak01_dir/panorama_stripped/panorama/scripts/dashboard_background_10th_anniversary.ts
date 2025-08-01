/// <reference path="dota.d.ts" />
/// <reference path="util.ts" />
/// <reference path="dota_sequence_actions.ts" />
/// <reference path="hud/versus/dota_hud_versus_scene_shared.ts" />

                                
         
          
              
                      
                       
                
                        
                             
               

                    


var mainPanel = $('#BackgroundScene') as DOTAScenePanel_t;
var RunPageAnimation = function ()

{
    var mainSeq = new RunSequentialActions();

	mainSeq.actions.push( new RunFunctionAction( function ()
	{

                     
        mainPanel.FireEntityInput( 'hero_ursa', 'Disable', '' );
        mainPanel.FireEntityInput( 'roshan', 'Disable', '' );
                                                                                                                                    
        


                                                                                                    
        mainPanel.FireEntityInput( 'hero_earthshaker', 'SetActivityModifier', 'collectors_cache' );
        mainPanel.FireEntityInput( 'hero_earthshaker', 'DisableDefaultActivityModifiers', 1 );
        mainPanel.FireEntityInput( 'hero_earthshaker', 'SetPlaybackRateOnAllLayers', 0.9 );

        $.Schedule(2, function () {
                                                                                                                             

        });

        $.Schedule(1.2, function () {
            mainPanel.FireEntityInput( 'hero_ursa', 'Enable', '' );
                                                                                              
                                                                                                  
                                                                                          
            mainPanel.FireEntityInput( 'hero_ursa', 'SetPlaybackRateOnAllLayers', 0.6 );
        });
        $.Schedule(2.0, function () {
            mainPanel.FireEntityInput( 'roshan', 'Enable', '' );
                                                                                          
            mainPanel.FireEntityInput( 'roshan', 'DisableDefaultActivityModifiers', 1 );
                                                                                                 
            mainPanel.FireEntityInput( 'roshan', 'SetActivityModifier', 'nofx' );
                                                                                        
            mainPanel.FireEntityInput( 'roshan', 'StartGestureOverride', 'ACT_DOTA_SPAWN' );
            mainPanel.FireEntityInput( 'roshan', 'SetPlaybackRateOnAllLayers', 0.6 );
        });

        

    }));

                        


	RunSingleAction( mainSeq );
}







                                        

                                                                
    
                                                           
        
                                                         
                               
        
    

                                      
    
                                       

                                                

                                            

                                                                               
                                                                                                     

                               
    

                                     
    
                                      

                                                

                                            

                                                                               
                                                                                                     

                              
    

                                      
    
                                       

                                                

                                            

                                                                               
                                                                                                     

                              
    

                                      
    
                                                               
                                                                       
                                                                             
                                                              
        
                                                
                                                 
                                     
        

                   
    

                          

                                   
    
                                                        

                                                                 

                                                                  

                                                                 
                  

                       
        
                             
            
                                                             
                                   
            
               
            
                                                            
            
        
           
        
                                                         
        
    


                                                                                                      
    
                                    
                                                             
       

                                                                                                        
    
                                  
                                                             
       

                                                                                                          
    
                                   
                                        
       
