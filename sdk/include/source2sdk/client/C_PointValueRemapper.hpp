#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/ValueRemapperHapticsType_t.hpp"
#include "source2sdk/client/ValueRemapperInputType_t.hpp"
#include "source2sdk/client/ValueRemapperMomentumType_t.hpp"
#include "source2sdk/client/ValueRemapperOutputType_t.hpp"
#include "source2sdk/client/ValueRemapperRatchetType_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5d8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkVarNames "bool m_bDisabled"
    // static metadata: MNetworkVarNames "bool m_bUpdateOnClient"
    // static metadata: MNetworkVarNames "ValueRemapperInputType_t m_nInputType"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hRemapLineStart"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hRemapLineEnd"
    // static metadata: MNetworkVarNames "float m_flMaximumChangePerSecond"
    // static metadata: MNetworkVarNames "float m_flDisengageDistance"
    // static metadata: MNetworkVarNames "float m_flEngageDistance"
    // static metadata: MNetworkVarNames "bool m_bRequiresUseKey"
    // static metadata: MNetworkVarNames "ValueRemapperOutputType_t m_nOutputType"
    // static metadata: MNetworkVarNames "CHandle< C_BaseEntity > m_hOutputEntities"
    // static metadata: MNetworkVarNames "ValueRemapperHapticsType_t m_nHapticsType"
    // static metadata: MNetworkVarNames "ValueRemapperMomentumType_t m_nMomentumType"
    // static metadata: MNetworkVarNames "float m_flMomentumModifier"
    // static metadata: MNetworkVarNames "float m_flSnapValue"
    // static metadata: MNetworkVarNames "ValueRemapperRatchetType_t m_nRatchetType"
    // static metadata: MNetworkVarNames "float m_flInputOffset"
    #pragma pack(push, 1)
    class C_PointValueRemapper : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bDisabled; // 0x560        
        bool m_bDisabledOld; // 0x561        
        // metadata: MNetworkEnable
        bool m_bUpdateOnClient; // 0x562        
        [[maybe_unused]] std::uint8_t pad_0x563[0x1]; // 0x563
        // metadata: MNetworkEnable
        client::ValueRemapperInputType_t m_nInputType; // 0x564        
        // metadata: MNetworkEnable
        // m_hRemapLineStart has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hRemapLineStart;
        char m_hRemapLineStart[0x4]; // 0x568        
        // metadata: MNetworkEnable
        // m_hRemapLineEnd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hRemapLineEnd;
        char m_hRemapLineEnd[0x4]; // 0x56c        
        // metadata: MNetworkEnable
        float m_flMaximumChangePerSecond; // 0x570        
        // metadata: MNetworkEnable
        float m_flDisengageDistance; // 0x574        
        // metadata: MNetworkEnable
        float m_flEngageDistance; // 0x578        
        // metadata: MNetworkEnable
        bool m_bRequiresUseKey; // 0x57c        
        [[maybe_unused]] std::uint8_t pad_0x57d[0x3]; // 0x57d
        // metadata: MNetworkEnable
        client::ValueRemapperOutputType_t m_nOutputType; // 0x580        
        [[maybe_unused]] std::uint8_t pad_0x584[0x4]; // 0x584
        // metadata: MNetworkEnable
        // m_hOutputEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CHandle<client::C_BaseEntity>> m_hOutputEntities;
        char m_hOutputEntities[0x18]; // 0x588        
        // metadata: MNetworkEnable
        client::ValueRemapperHapticsType_t m_nHapticsType; // 0x5a0        
        // metadata: MNetworkEnable
        client::ValueRemapperMomentumType_t m_nMomentumType; // 0x5a4        
        // metadata: MNetworkEnable
        float m_flMomentumModifier; // 0x5a8        
        // metadata: MNetworkEnable
        float m_flSnapValue; // 0x5ac        
        float m_flCurrentMomentum; // 0x5b0        
        // metadata: MNetworkEnable
        client::ValueRemapperRatchetType_t m_nRatchetType; // 0x5b4        
        float m_flRatchetOffset; // 0x5b8        
        // metadata: MNetworkEnable
        float m_flInputOffset; // 0x5bc        
        bool m_bEngaged; // 0x5c0        
        bool m_bFirstUpdate; // 0x5c1        
        [[maybe_unused]] std::uint8_t pad_0x5c2[0x2]; // 0x5c2
        float m_flPreviousValue; // 0x5c4        
        entity2::GameTime_t m_flPreviousUpdateTickTime; // 0x5c8        
        Vector m_vecPreviousTestPoint; // 0x5cc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PointValueRemapper because it is not a standard-layout class
    static_assert(sizeof(C_PointValueRemapper) == 0x5d8);
};
