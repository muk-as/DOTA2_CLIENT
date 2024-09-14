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
    class CTakeDamageInfo;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x18
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class CTakeDamageResult
    {
    public:
        client::CTakeDamageInfo* m_pOriginatingInfo; // 0x0        
        int32_t m_nHealthLost; // 0x8        
        int32_t m_nDamageTaken; // 0xc        
        int32_t m_nTotalledHealthLost; // 0x10        
        int32_t m_nTotalledDamageTaken; // 0x14        
        
        // Static fields:
        static client::CTakeDamageResult &Get_EmptyResult() {return *reinterpret_cast<client::CTakeDamageResult*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CTakeDamageResult")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CTakeDamageResult, m_pOriginatingInfo) == 0x0);
    static_assert(offsetof(CTakeDamageResult, m_nHealthLost) == 0x8);
    static_assert(offsetof(CTakeDamageResult, m_nDamageTaken) == 0xc);
    static_assert(offsetof(CTakeDamageResult, m_nTotalledHealthLost) == 0x10);
    static_assert(offsetof(CTakeDamageResult, m_nTotalledDamageTaken) == 0x14);
    
    static_assert(sizeof(CTakeDamageResult) == 0x18);
};
