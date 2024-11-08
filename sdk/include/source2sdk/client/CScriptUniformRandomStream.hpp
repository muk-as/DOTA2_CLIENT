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
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xa0
    // Has VTable
    #pragma pack(push, 1)
    class CScriptUniformRandomStream
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        HSCRIPT m_hScriptScope; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x10[0x8c]; // 0x10
        int32_t m_nInitialSeed; // 0x9c        
        
        // Static fields:
        static CUtlVector<client::CScriptUniformRandomStream*> &Get_sm_UniformStreams() {return *reinterpret_cast<CUtlVector<client::CScriptUniformRandomStream*>*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CScriptUniformRandomStream")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CScriptUniformRandomStream, m_hScriptScope) == 0x8);
    static_assert(offsetof(CScriptUniformRandomStream, m_nInitialSeed) == 0x9c);
    
    static_assert(sizeof(CScriptUniformRandomStream) == 0xa0);
};
