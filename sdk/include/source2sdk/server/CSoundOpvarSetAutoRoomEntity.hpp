#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/AutoRoomDoorwayPairs_t.hpp"
#include "source2sdk/server/CSoundOpvarSetPointEntity.hpp"
#include "source2sdk/server/SoundOpvarTraceResult_t.hpp"

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
        class CSoundOpvarSetAutoRoomEntity : public source2sdk::server::CSoundOpvarSetPointEntity
        {
        public:
            // m_traceResults has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::SoundOpvarTraceResult_t> m_traceResults;
            char m_traceResults[0x_]; // 0x_            
            // m_doorwayPairs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::AutoRoomDoorwayPairs_t> m_doorwayPairs;
            char m_doorwayPairs[0x_]; // 0x_            
            float m_flSize; // 0x_            
            float m_flHeightTolerance; // 0x_            
            float m_flSizeSqr; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void CSoundOpvarSetAutoRoomEntitySetOpvarThink; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundOpvarSetAutoRoomEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundOpvarSetAutoRoomEntity) == 0x_);
    };
};
