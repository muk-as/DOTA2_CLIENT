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
    // Size: 0xad0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_ClientRagdoll : public client::CBaseAnimGraph
    {
    public:
        bool m_bFadeOut; // 0xa38        
        bool m_bImportant; // 0xa39        
        [[maybe_unused]] std::uint8_t pad_0xa3a[0x2]; // 0xa3a
        entity2::GameTime_t m_flEffectTime; // 0xa3c        
        entity2::GameTime_t m_gibDespawnTime; // 0xa40        
        int32_t m_iCurrentFriction; // 0xa44        
        int32_t m_iMinFriction; // 0xa48        
        int32_t m_iMaxFriction; // 0xa4c        
        int32_t m_iFrictionAnimState; // 0xa50        
        bool m_bReleaseRagdoll; // 0xa54        
        modellib::AttachmentHandle_t m_iEyeAttachment; // 0xa55        
        bool m_bFadingOut; // 0xa56        
        [[maybe_unused]] std::uint8_t pad_0xa57[0x1]; // 0xa57
        float m_flScaleEnd[10]; // 0xa58        
        entity2::GameTime_t m_flScaleTimeStart[10]; // 0xa80        
        entity2::GameTime_t m_flScaleTimeEnd[10]; // 0xaa8        
        
        // Datamap fields:
        // Color m_clrRender; // 0x5c0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_ClientRagdoll because it is not a standard-layout class
    static_assert(sizeof(C_ClientRagdoll) == 0xad0);
};
