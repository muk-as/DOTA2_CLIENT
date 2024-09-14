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
    // static metadata: MIsBoxedIntegerType
    #pragma pack(push, 1)
    struct GameTick_t
    {
    public:
        int32_t m_Value; // 0x0        
        
        // Static fields:
        static bool &Get_IS_TYPESAFE_INTEGER() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("GameTick_t")->GetStaticFields()[0]->m_pInstance);};
        static entity2::GameTick_t &Get_Zero() {return *reinterpret_cast<entity2::GameTick_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("GameTick_t")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    static_assert(offsetof(GameTick_t, m_Value) == 0x0);
    
    static_assert(sizeof(GameTick_t) == 0x4);
};
