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
    // Registered alignment: unknown
    // Alignment: 0x1
    // Standard-layout class: true
    // Size: 0x1
    // Has Trivial Destructor
    // 
    // static metadata: MIsBoxedIntegerType
    #pragma pack(push, 1)
    struct AttachmentHandle_t
    {
    public:
        uint8_t m_Value; // 0x0        
        
        // Static fields:
        static bool &Get_IS_TYPESAFE_INTEGER() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("AttachmentHandle_t")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AttachmentHandle_t, m_Value) == 0x0);
    
    static_assert(sizeof(AttachmentHandle_t) == 0x1);
};
