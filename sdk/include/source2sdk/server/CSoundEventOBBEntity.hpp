#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CSoundEventEntity.hpp"

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
        // 
        // static metadata: MNetworkVarNames "Vector m_vMins"
        // static metadata: MNetworkVarNames "Vector m_vMaxs"
        #pragma pack(push, 1)
        class CSoundEventOBBEntity : public source2sdk::server::CSoundEventEntity
        {
        public:
            // metadata: MNetworkEnable
            Vector m_vMins; // 0x_            
            // metadata: MNetworkEnable
            Vector m_vMaxs; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void CSoundEventOBBEntitySoundEventOBBThink; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundEventOBBEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundEventOBBEntity) == 0x_);
    };
};
