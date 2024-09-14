#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x4
    // Has Trivial Destructor
    // 
    // static metadata: MIsBoxedIntegerType
    #pragma pack(push, 1)
    struct ParticleAttributeIndex_t
    {
    public:
        int32_t m_Value; // 0x0        
        
        // Static fields:
        static bool &Get_IS_TYPESAFE_INTEGER() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("ParticleAttributeIndex_t")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ParticleAttributeIndex_t, m_Value) == 0x0);
    
    static_assert(sizeof(ParticleAttributeIndex_t) == 0x4);
};
