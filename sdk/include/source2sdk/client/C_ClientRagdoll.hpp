#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xcd8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_ClientRagdoll : public source2sdk::client::CBaseAnimGraph
        {
        public:
            bool m_bFadeOut; // 0xc40            
            bool m_bImportant; // 0xc41            
            uint8_t _pad0c42[0x2]; // 0xc42
            source2sdk::entity2::GameTime_t m_flEffectTime; // 0xc44            
            source2sdk::entity2::GameTime_t m_gibDespawnTime; // 0xc48            
            std::int32_t m_iCurrentFriction; // 0xc4c            
            std::int32_t m_iMinFriction; // 0xc50            
            std::int32_t m_iMaxFriction; // 0xc54            
            std::int32_t m_iFrictionAnimState; // 0xc58            
            bool m_bReleaseRagdoll; // 0xc5c            
            source2sdk::modellib::AttachmentHandle_t m_iEyeAttachment; // 0xc5d            
            bool m_bFadingOut; // 0xc5e            
            uint8_t _pad0c5f[0x1]; // 0xc5f
            float m_flScaleEnd[10]; // 0xc60            
            source2sdk::entity2::GameTime_t m_flScaleTimeStart[10]; // 0xc88            
            source2sdk::entity2::GameTime_t m_flScaleTimeEnd[10]; // 0xcb0            
            
            // Datamap fields:
            // Color m_clrRender; // 0x690
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ClientRagdoll because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ClientRagdoll) == 0xcd8);
    };
};
