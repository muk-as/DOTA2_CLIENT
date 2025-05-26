#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"

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
        // Size: 0x570
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CLogicDistanceCheck : public source2sdk::server::CLogicalEntity
        {
        public:
            CUtlSymbolLarge m_iszEntityA; // 0x4e0            
            CUtlSymbolLarge m_iszEntityB; // 0x4e8            
            float m_flZone1Distance; // 0x4f0            
            float m_flZone2Distance; // 0x4f4            
            source2sdk::entity2::CEntityIOOutput m_InZone1; // 0x4f8            
            source2sdk::entity2::CEntityIOOutput m_InZone2; // 0x520            
            source2sdk::entity2::CEntityIOOutput m_InZone3; // 0x548            
            
            // Datamap fields:
            // void InputCheckDistance; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicDistanceCheck because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicDistanceCheck) == 0x570);
    };
};
