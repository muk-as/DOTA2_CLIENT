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
    struct SceneEventId_t
    {
    public:
        uint32_t m_Value; // 0x0        
        
        // Static fields:
        static bool &Get_IS_TYPESAFE_INTEGER() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("SceneEventId_t")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    static_assert(offsetof(SceneEventId_t, m_Value) == 0x0);
    
    static_assert(sizeof(SceneEventId_t) == 0x4);
};
