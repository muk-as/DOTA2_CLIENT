#pragma once
#include "source2sdk/server/CPhysConstraint.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x588
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CPhysWheelConstraint : public server::CPhysConstraint
    {
    public:
        float m_flSuspensionFrequency; // 0x558        
        float m_flSuspensionDampingRatio; // 0x55c        
        float m_flSuspensionHeightOffset; // 0x560        
        bool m_bEnableSuspensionLimit; // 0x564        
        [[maybe_unused]] std::uint8_t pad_0x565[0x3]; // 0x565
        float m_flMinSuspensionOffset; // 0x568        
        float m_flMaxSuspensionOffset; // 0x56c        
        bool m_bEnableSteeringLimit; // 0x570        
        [[maybe_unused]] std::uint8_t pad_0x571[0x3]; // 0x571
        float m_flMinSteeringAngle; // 0x574        
        float m_flMaxSteeringAngle; // 0x578        
        float m_flSteeringAxisFriction; // 0x57c        
        float m_flSpinAxisFriction; // 0x580        
        // m_hSteeringMimicsEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hSteeringMimicsEntity;
        char m_hSteeringMimicsEntity[0x4]; // 0x584        
        
        // Datamap fields:
        // CUtlSymbolLarge InputSetSteeringMimicsEntity; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysWheelConstraint because it is not a standard-layout class
    static_assert(sizeof(CPhysWheelConstraint) == 0x588);
};
