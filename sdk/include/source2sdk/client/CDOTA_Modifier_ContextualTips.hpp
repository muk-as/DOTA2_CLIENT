#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x16e8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_ContextualTips : public client::CDOTA_Buff
    {
    public:
        // Static fields:
        static float &Get_k_flParentDamageTrackingWindow() {return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CDOTA_Modifier_ContextualTips")->GetStaticFields()[0]->m_pInstance);};
        static float &Get_k_flGlobalTipCooldown() {return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CDOTA_Modifier_ContextualTips")->GetStaticFields()[1]->m_pInstance);};
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CDOTA_Modifier_ContextualTips) == 0x16e8);
};
