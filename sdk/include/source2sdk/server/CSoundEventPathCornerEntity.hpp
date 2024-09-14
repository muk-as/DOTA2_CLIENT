#pragma once
#include "source2sdk/client/SoundeventPathCornerPairNetworked_t.hpp"
#include "source2sdk/server/CSoundEventEntity.hpp"
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
    // Size: 0x5c8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "SoundeventPathCornerPairNetworked_t m_vecCornerPairsNetworked"
    #pragma pack(push, 1)
    class CSoundEventPathCornerEntity : public server::CSoundEventEntity
    {
    public:
        CUtlSymbolLarge m_iszPathCorner; // 0x570        
        int32_t m_iCountMax; // 0x578        
        float m_flDistanceMax; // 0x57c        
        float m_flDistMaxSqr; // 0x580        
        float m_flDotProductMax; // 0x584        
        bool m_bPlaying; // 0x588        
        [[maybe_unused]] std::uint8_t pad_0x589[0x27]; // 0x589
        // metadata: MNetworkEnable
        // m_vecCornerPairsNetworked has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<client::SoundeventPathCornerPairNetworked_t> m_vecCornerPairsNetworked;
        char m_vecCornerPairsNetworked[0x18]; // 0x5b0        
        
        // Datamap fields:
        // void CSoundEventPathCornerEntitySoundEventPathCornerThink; // 0x0
        // void m_vecPathCornerPairs; // 0x590
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSoundEventPathCornerEntity because it is not a standard-layout class
    static_assert(sizeof(CSoundEventPathCornerEntity) == 0x5c8);
};
