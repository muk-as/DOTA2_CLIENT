#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x4
    // Has Trivial Destructor
    // 
    // static metadata: MIsBoxedIntegerType
    #pragma pack(push, 1)
    struct ParticleIndex_t
    {
    public:
        int32_t m_Value; // 0x0        
        
        // Static fields:
        static bool &Get_IS_TYPESAFE_INTEGER() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("ParticleIndex_t")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ParticleIndex_t, m_Value) == 0x0);
    
    static_assert(sizeof(ParticleIndex_t) == 0x4);
};
