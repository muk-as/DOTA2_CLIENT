#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBreakable.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBasePlayerPawn;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x998
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CPhysBox : public server::CBreakable
    {
    public:
        int32_t m_damageType; // 0x888        
        int32_t m_damageToEnableMotion; // 0x88c        
        float m_flForceToEnableMotion; // 0x890        
        QAngle m_angPreferredCarryAngles; // 0x894        
        bool m_bNotSolidToWorld; // 0x8a0        
        bool m_bEnableUseOutput; // 0x8a1        
        [[maybe_unused]] std::uint8_t pad_0x8a2[0x2]; // 0x8a2
        int32_t m_iExploitableByPlayer; // 0x8a4        
        float m_flTouchOutputPerEntityDelay; // 0x8a8        
        [[maybe_unused]] std::uint8_t pad_0x8ac[0x4]; // 0x8ac
        entity2::CEntityIOOutput m_OnDamaged; // 0x8b0        
        entity2::CEntityIOOutput m_OnAwakened; // 0x8d8        
        entity2::CEntityIOOutput m_OnMotionEnabled; // 0x900        
        entity2::CEntityIOOutput m_OnPlayerUse; // 0x928        
        entity2::CEntityIOOutput m_OnStartTouch; // 0x950        
        // m_hCarryingPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerPawn> m_hCarryingPlayer;
        char m_hCarryingPlayer[0x4]; // 0x978        
        [[maybe_unused]] std::uint8_t pad_0x97c[0x1c];
        
        // Datamap fields:
        // void InputWake; // 0x0
        // void InputSleep; // 0x0
        // void InputEnableMotion; // 0x0
        // void InputDisableMotion; // 0x0
        // void InputForceDrop; // 0x0
        // void InputDisableFloating; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysBox because it is not a standard-layout class
    static_assert(sizeof(CPhysBox) == 0x998);
};
