#pragma once
#include "source2sdk/server/AutoRoomDoorwayPairs_t.hpp"
#include "source2sdk/server/CSoundOpvarSetPointEntity.hpp"
#include "source2sdk/server/SoundOpvarTraceResult_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x6a0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CSoundOpvarSetAutoRoomEntity : public server::CSoundOpvarSetPointEntity
    {
    public:
        // m_traceResults has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::SoundOpvarTraceResult_t> m_traceResults;
        char m_traceResults[0x18]; // 0x660        
        // m_doorwayPairs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::AutoRoomDoorwayPairs_t> m_doorwayPairs;
        char m_doorwayPairs[0x18]; // 0x678        
        float m_flSize; // 0x690        
        float m_flHeightTolerance; // 0x694        
        float m_flSizeSqr; // 0x698        
        [[maybe_unused]] std::uint8_t pad_0x69c[0x4];
        
        // Datamap fields:
        // void CSoundOpvarSetAutoRoomEntitySetOpvarThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSoundOpvarSetAutoRoomEntity because it is not a standard-layout class
    static_assert(sizeof(CSoundOpvarSetAutoRoomEntity) == 0x6a0);
};
