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
        // Size: 0xd10
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_ClientRagdoll : public source2sdk::client::CBaseAnimGraph
        {
        public:
            bool m_bFadeOut; // 0xc78            
            bool m_bImportant; // 0xc79            
            uint8_t _pad0c7a[0x2]; // 0xc7a
            source2sdk::entity2::GameTime_t m_flEffectTime; // 0xc7c            
            source2sdk::entity2::GameTime_t m_gibDespawnTime; // 0xc80            
            std::int32_t m_iCurrentFriction; // 0xc84            
            std::int32_t m_iMinFriction; // 0xc88            
            std::int32_t m_iMaxFriction; // 0xc8c            
            std::int32_t m_iFrictionAnimState; // 0xc90            
            bool m_bReleaseRagdoll; // 0xc94            
            source2sdk::modellib::AttachmentHandle_t m_iEyeAttachment; // 0xc95            
            bool m_bFadingOut; // 0xc96            
            uint8_t _pad0c97[0x1]; // 0xc97
            float m_flScaleEnd[10]; // 0xc98            
            source2sdk::entity2::GameTime_t m_flScaleTimeStart[10]; // 0xcc0            
            source2sdk::entity2::GameTime_t m_flScaleTimeEnd[10]; // 0xce8            
            
            // Datamap fields:
            // Color m_clrRender; // 0x690
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ClientRagdoll because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ClientRagdoll) == 0xd10);
    };
};
