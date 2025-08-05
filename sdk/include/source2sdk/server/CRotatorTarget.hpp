#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/server/RotatorTargetSpace_t.hpp"

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
        // Size: 0x510
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CRotatorTarget : public source2sdk::server::CPointEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnArrivedAt; // 0x4e0            
            source2sdk::server::RotatorTargetSpace_t m_eSpace; // 0x508            
            uint8_t _pad050c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRotatorTarget because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CRotatorTarget) == 0x510);
    };
};
