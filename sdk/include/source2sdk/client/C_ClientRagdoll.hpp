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
        // Size: 0xb60
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_ClientRagdoll : public source2sdk::client::CBaseAnimGraph
        {
        public:
            bool m_bFadeOut; // 0xac8            
            bool m_bImportant; // 0xac9            
            uint8_t _pad0aca[0x2]; // 0xaca
            source2sdk::entity2::GameTime_t m_flEffectTime; // 0xacc            
            source2sdk::entity2::GameTime_t m_gibDespawnTime; // 0xad0            
            std::int32_t m_iCurrentFriction; // 0xad4            
            std::int32_t m_iMinFriction; // 0xad8            
            std::int32_t m_iMaxFriction; // 0xadc            
            std::int32_t m_iFrictionAnimState; // 0xae0            
            bool m_bReleaseRagdoll; // 0xae4            
            source2sdk::modellib::AttachmentHandle_t m_iEyeAttachment; // 0xae5            
            bool m_bFadingOut; // 0xae6            
            uint8_t _pad0ae7[0x1]; // 0xae7
            float m_flScaleEnd[10]; // 0xae8            
            source2sdk::entity2::GameTime_t m_flScaleTimeStart[10]; // 0xb10            
            source2sdk::entity2::GameTime_t m_flScaleTimeEnd[10]; // 0xb38            
            
            // Datamap fields:
            // Color m_clrRender; // 0x5a0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ClientRagdoll because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ClientRagdoll) == 0xb60);
    };
};
