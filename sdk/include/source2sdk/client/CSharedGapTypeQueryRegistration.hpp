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
    // Alignment: 0x1
    // Standard-layout class: true
    // Size: 0x8
    // Has VTable
    // Has Trivial Destructor
    // 
    // static metadata: MGapTypeQueriesForScopeSingleton
    #pragma pack(push, 1)
    class CSharedGapTypeQueryRegistration
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8];
        // Static fields:
        static client::CSharedGapTypeQueryRegistration &Get_s_Instance() {return *reinterpret_cast<client::CSharedGapTypeQueryRegistration*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CSharedGapTypeQueryRegistration")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CSharedGapTypeQueryRegistration) == 0x8);
};
