#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/SoundeventPathCornerPairNetworked_t.hpp"
#include "source2sdk/server/CSoundEventEntity.hpp"

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
        // Size: 0x630
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "SoundeventPathCornerPairNetworked_t m_vecCornerPairsNetworked"
        #pragma pack(push, 1)
        class CSoundEventPathCornerEntity : public source2sdk::server::CSoundEventEntity
        {
        public:
            CUtlSymbolLarge m_iszPathCorner; // 0x590            
            std::int32_t m_iCountMax; // 0x598            
            float m_flDistanceMax; // 0x59c            
            float m_flDistMaxSqr; // 0x5a0            
            float m_flDotProductMax; // 0x5a4            
            bool m_bPlaying; // 0x5a8            
            uint8_t _pad05a9[0x27]; // 0x5a9
            // metadata: MNetworkEnable
            // m_vecCornerPairsNetworked has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::client::SoundeventPathCornerPairNetworked_t> m_vecCornerPairsNetworked;
            char m_vecCornerPairsNetworked[0x60]; // 0x5d0            
            
            // Datamap fields:
            // void CSoundEventPathCornerEntitySoundEventPathCornerThink; // 0x0
            // void m_vecPathCornerPairs; // 0x5b0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundEventPathCornerEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundEventPathCornerEntity) == 0x630);
    };
};
