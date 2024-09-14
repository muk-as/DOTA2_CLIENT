#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    class CDOTA_Tree;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Treant_EyesInTheForest_Thinker : public client::CDOTA_Buff
    {
    public:
        float vision_aoe; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16ec[0x4]; // 0x16ec
        server::CDOTA_Tree* m_Tree; // 0x16f0        
        // m_hTree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTree;
        char m_hTree[0x4]; // 0x16f8        
        client::ParticleIndex_t m_nFXIndex; // 0x16fc        
        bool m_bUpgradedVision; // 0x1700        
        [[maybe_unused]] std::uint8_t pad_0x1701[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Treant_EyesInTheForest_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Treant_EyesInTheForest_Thinker) == 0x1708);
};
