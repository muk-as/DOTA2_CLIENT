#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: entity2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::entity2
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x4
    // Has Trivial Destructor
    // 
    // static metadata: MIsBoxedFloatType
    #pragma pack(push, 1)
    struct GameTime_t
    {
    public:
        float m_Value; // 0x0        
        
        // Static fields:
        static bool &Get_IS_TYPESAFE_FLOAT() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("GameTime_t")->GetStaticFields()[0]->m_pInstance);};
        static entity2::GameTime_t &Get_Zero() {return *reinterpret_cast<entity2::GameTime_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("GameTime_t")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    static_assert(offsetof(GameTime_t, m_Value) == 0x0);
    
    static_assert(sizeof(GameTime_t) == 0x4);
};
