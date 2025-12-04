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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_ClientRagdoll : public source2sdk::client::CBaseAnimGraph
        {
        public:
            bool m_bFadeOut; // 0x_            
            bool m_bImportant; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_flEffectTime; // 0x_            
            source2sdk::entity2::GameTime_t m_gibDespawnTime; // 0x_            
            std::int32_t m_iCurrentFriction; // 0x_            
            std::int32_t m_iMinFriction; // 0x_            
            std::int32_t m_iMaxFriction; // 0x_            
            std::int32_t m_iFrictionAnimState; // 0x_            
            bool m_bReleaseRagdoll; // 0x_            
            source2sdk::modellib::AttachmentHandle_t m_iEyeAttachment; // 0x_            
            bool m_bFadingOut; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flScaleEnd[10]; // 0x_            
            source2sdk::entity2::GameTime_t m_flScaleTimeStart[10]; // 0x_            
            source2sdk::entity2::GameTime_t m_flScaleTimeEnd[10]; // 0x_            
            
            // Datamap fields:
            // Color m_clrRender; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ClientRagdoll because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ClientRagdoll) == 0x_);
    };
};
