#pragma once
#include "source2sdk/client/C_SoundEventEntity.hpp"
#include "source2sdk/client/SoundeventPathCornerPairNetworked_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x610
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "SoundeventPathCornerPairNetworked_t m_vecCornerPairsNetworked"
    #pragma pack(push, 1)
    class C_SoundEventPathCornerEntity : public client::C_SoundEventEntity
    {
    public:
        // metadata: MNetworkEnable
        // m_vecCornerPairsNetworked has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<client::SoundeventPathCornerPairNetworked_t> m_vecCornerPairsNetworked;
        char m_vecCornerPairsNetworked[0x18]; // 0x5f8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_SoundEventPathCornerEntity because it is not a standard-layout class
    static_assert(sizeof(C_SoundEventPathCornerEntity) == 0x610);
};
