#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPhysConstraint.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        class CPhysWheelConstraint : public source2sdk::server::CPhysConstraint
        {
        public:
            float m_flSuspensionFrequency; // 0x_            
            float m_flSuspensionDampingRatio; // 0x_            
            float m_flSuspensionHeightOffset; // 0x_            
            bool m_bEnableSuspensionLimit; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flMinSuspensionOffset; // 0x_            
            float m_flMaxSuspensionOffset; // 0x_            
            bool m_bEnableSteeringLimit; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flMinSteeringAngle; // 0x_            
            float m_flMaxSteeringAngle; // 0x_            
            float m_flSteeringAxisFriction; // 0x_            
            float m_flSpinAxisFriction; // 0x_            
            // m_hSteeringMimicsEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hSteeringMimicsEntity;
            char m_hSteeringMimicsEntity[0x_]; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // float InputSetMinSuspensionOffset; // 0x_
            // float InputSetMaxSuspensionOffset; // 0x_
            // CUtlSymbolLarge InputSetSteeringMimicsEntity; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysWheelConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysWheelConstraint) == 0x_);
    };
};
