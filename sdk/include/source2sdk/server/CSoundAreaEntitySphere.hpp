#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CSoundAreaEntityBase.hpp"

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
        // Size: 0x508
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "float m_flRadius"
        #pragma pack(push, 1)
        class CSoundAreaEntitySphere : public source2sdk::server::CSoundAreaEntityBase
        {
        public:
            // metadata: MNetworkEnable
            float m_flRadius; // 0x500            
            uint8_t _pad0504[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundAreaEntitySphere because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundAreaEntitySphere) == 0x508);
    };
};
