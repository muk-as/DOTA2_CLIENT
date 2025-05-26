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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5b0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSplineConstraint : public source2sdk::server::CPhysConstraint
        {
        public:
            uint8_t _pad0550[0x48]; // 0x550
            Vector m_vAnchorOffsetRestore; // 0x598            
            bool m_bEnableLateralConstraint; // 0x5a4            
            bool m_bEnableVerticalConstraint; // 0x5a5            
            bool m_bEnableAngularConstraint; // 0x5a6            
            uint8_t _pad05a7[0x1]; // 0x5a7
            float m_flLinearFrequency; // 0x5a8            
            float m_flLinarDampingRatio; // 0x5ac            
            
            // Datamap fields:
            // void CSplineConstraintUpdateThink; // 0x0
            // CUtlSymbolLarge InputSetSplineEntity; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSplineConstraint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSplineConstraint) == 0x5b0);
    };
};
