#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x14
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CFootTrajectory
    {
    public:
        Vector m_vOffset; // 0x0        
        float m_flRotationOffset; // 0xc        
        float m_flProgression; // 0x10        
        
        // Static fields:
        static modellib::CFootTrajectory &Get_Identity() {return *reinterpret_cast<modellib::CFootTrajectory*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CFootTrajectory")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CFootTrajectory, m_vOffset) == 0x0);
    static_assert(offsetof(CFootTrajectory, m_flRotationOffset) == 0xc);
    static_assert(offsetof(CFootTrajectory, m_flProgression) == 0x10);
    
    static_assert(sizeof(CFootTrajectory) == 0x14);
};
