#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBreakable.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x988
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CPhysBox : public source2sdk::server::CBreakable
        {
        public:
            std::int32_t m_damageType; // 0x880            
            std::int32_t m_damageToEnableMotion; // 0x884            
            float m_flForceToEnableMotion; // 0x888            
            QAngle m_angPreferredCarryAngles; // 0x88c            
            bool m_bNotSolidToWorld; // 0x898            
            bool m_bEnableUseOutput; // 0x899            
            uint8_t _pad089a[0x2]; // 0x89a
            float m_flTouchOutputPerEntityDelay; // 0x89c            
            source2sdk::entity2::CEntityIOOutput m_OnDamaged; // 0x8a0            
            source2sdk::entity2::CEntityIOOutput m_OnAwakened; // 0x8c8            
            source2sdk::entity2::CEntityIOOutput m_OnMotionEnabled; // 0x8f0            
            source2sdk::entity2::CEntityIOOutput m_OnPlayerUse; // 0x918            
            source2sdk::entity2::CEntityIOOutput m_OnStartTouch; // 0x940            
            // m_hCarryingPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerPawn> m_hCarryingPlayer;
            char m_hCarryingPlayer[0x4]; // 0x968            
            uint8_t _pad096c[0x1c];
            
            // Datamap fields:
            // void InputWake; // 0x0
            // void InputSleep; // 0x0
            // void InputEnableMotion; // 0x0
            // void InputDisableMotion; // 0x0
            // void InputForceDrop; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysBox because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysBox) == 0x988);
    };
};
