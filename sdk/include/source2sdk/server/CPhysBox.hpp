#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBreakable.hpp"
#include "source2sdk/server/HoverPoseFlags_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBasePlayerPawn;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPhysBox : public source2sdk::server::CBreakable
        {
        public:
            std::int32_t m_damageType; // 0x_            
            std::int32_t m_damageToEnableMotion; // 0x_            
            float m_flForceToEnableMotion; // 0x_            
            Vector m_vHoverPosePosition; // 0x_            
            QAngle m_angHoverPoseAngles; // 0x_            
            bool m_bNotSolidToWorld; // 0x_            
            bool m_bEnableUseOutput; // 0x_            
            source2sdk::server::HoverPoseFlags_t m_nHoverPoseFlags; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flTouchOutputPerEntityDelay; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::CEntityIOOutput m_OnDamaged; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnAwakened; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnMotionEnabled; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerUse; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnStartTouch; // 0x_            
            // m_hCarryingPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerPawn> m_hCarryingPlayer;
            char m_hCarryingPlayer[0x_]; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // QAngle preferredcarryangles; // 0x_
            // void InputWake; // 0x_
            // void InputSleep; // 0x_
            // void InputEnableMotion; // 0x_
            // void InputDisableMotion; // 0x_
            // void InputForceDrop; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysBox because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysBox) == 0x_);
    };
};
