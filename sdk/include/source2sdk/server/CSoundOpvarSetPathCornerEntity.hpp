#pragma once
#include "source2sdk/server/CSoundOpvarSetPointEntity.hpp"
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
    // Size: 0x688
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CSoundOpvarSetPathCornerEntity : public server::CSoundOpvarSetPointEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x660[0x18]; // 0x660
        float m_flDistMinSqr; // 0x678        
        float m_flDistMaxSqr; // 0x67c        
        CUtlSymbolLarge m_iszPathCornerEntityName; // 0x680        
        
        // Datamap fields:
        // void CSoundOpvarSetPathCornerEntitySetOpvarThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSoundOpvarSetPathCornerEntity because it is not a standard-layout class
    static_assert(sizeof(CSoundOpvarSetPathCornerEntity) == 0x688);
};
