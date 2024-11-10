#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb18
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class C_ClientRagdoll : public client::CBaseAnimGraph
    {
    public:
        bool m_bFadeOut; // 0xa80        
        bool m_bImportant; // 0xa81        
        [[maybe_unused]] std::uint8_t pad_0xa82[0x2]; // 0xa82
        entity2::GameTime_t m_flEffectTime; // 0xa84        
        entity2::GameTime_t m_gibDespawnTime; // 0xa88        
        int32_t m_iCurrentFriction; // 0xa8c        
        int32_t m_iMinFriction; // 0xa90        
        int32_t m_iMaxFriction; // 0xa94        
        int32_t m_iFrictionAnimState; // 0xa98        
        bool m_bReleaseRagdoll; // 0xa9c        
        modellib::AttachmentHandle_t m_iEyeAttachment; // 0xa9d        
        bool m_bFadingOut; // 0xa9e        
        [[maybe_unused]] std::uint8_t pad_0xa9f[0x1]; // 0xa9f
        float m_flScaleEnd[10]; // 0xaa0        
        entity2::GameTime_t m_flScaleTimeStart[10]; // 0xac8        
        entity2::GameTime_t m_flScaleTimeEnd[10]; // 0xaf0        
        
        // Datamap fields:
        // Color m_clrRender; // 0x5f0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_ClientRagdoll because it is not a standard-layout class
    static_assert(sizeof(C_ClientRagdoll) == 0xb18);
};
