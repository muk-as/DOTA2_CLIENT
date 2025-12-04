#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPhysConstraint.hpp"

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
        class CPhysFixed : public source2sdk::server::CPhysConstraint
        {
        public:
            float m_flLinearFrequency; // 0x_            
            float m_flLinearDampingRatio; // 0x_            
            float m_flAngularFrequency; // 0x_            
            float m_flAngularDampingRatio; // 0x_            
            bool m_bEnableLinearConstraint; // 0x_            
            bool m_bEnableAngularConstraint; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_sBoneName1; // 0x_            
            CUtlSymbolLarge m_sBoneName2; // 0x_            
            
            // Datamap fields:
            // float InputSetLinearFrequency; // 0x_
            // float InputSetLinearDampingRatio; // 0x_
            // float InputSetAngularFrequency; // 0x_
            // float InputSetAngularDampingRatio; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysFixed because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysFixed) == 0x_);
    };
};
