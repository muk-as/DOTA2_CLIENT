#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // MIgnoreTypeScopeMetaChecks
        // 
        // static metadata: MNetworkVarNames "uint32 m_PredNetBoolVariables"
        // static metadata: MNetworkVarNames "byte m_PredNetByteVariables"
        // static metadata: MNetworkVarNames "uint16 m_PredNetUInt16Variables"
        // static metadata: MNetworkVarNames "int32 m_PredNetIntVariables"
        // static metadata: MNetworkVarNames "uint32 m_PredNetUInt32Variables"
        // static metadata: MNetworkVarNames "uint64 m_PredNetUInt64Variables"
        // static metadata: MNetworkVarNames "float m_PredNetFloatVariables"
        // static metadata: MNetworkVarNames "Vector m_PredNetVectorVariables"
        // static metadata: MNetworkVarNames "Quaternion m_PredNetQuaternionVariables"
        // static metadata: MNetworkVarNames "CGlobalSymbol m_PredNetGlobalSymbolVariables"
        // static metadata: MNetworkVarNames "uint32 m_OwnerOnlyPredNetBoolVariables"
        // static metadata: MNetworkVarNames "byte m_OwnerOnlyPredNetByteVariables"
        // static metadata: MNetworkVarNames "uint16 m_OwnerOnlyPredNetUInt16Variables"
        // static metadata: MNetworkVarNames "int32 m_OwnerOnlyPredNetIntVariables"
        // static metadata: MNetworkVarNames "uint32 m_OwnerOnlyPredNetUInt32Variables"
        // static metadata: MNetworkVarNames "uint64 m_OwnerOnlyPredNetUInt64Variables"
        // static metadata: MNetworkVarNames "float m_OwnerOnlyPredNetFloatVariables"
        // static metadata: MNetworkVarNames "Vector m_OwnerOnlyPredNetVectorVariables"
        // static metadata: MNetworkVarNames "Quaternion m_OwnerOnlyPredNetQuaternionVariables"
        // static metadata: MNetworkVarNames "CGlobalSymbol m_OwnerOnlyPredNetGlobalSymbolVariables"
        // static metadata: MNetworkVarNames "int m_nBoolVariablesCount"
        // static metadata: MNetworkVarNames "int m_nOwnerOnlyBoolVariablesCount"
        // static metadata: MNetworkVarNames "int m_nRandomSeedOffset"
        // static metadata: MNetworkVarNames "float m_flLastTeleportTime"
        #pragma pack(push, 1)
        class CAnimGraphNetworkedVariables
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "animationgraph"
            // metadata: MNetworkChangeCallback "OnNetBoolVarChanged"
            // metadata: MNetworkAlias "m_PredBoolVariables"
            // m_PredNetBoolVariables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::uint32_t> m_PredNetBoolVariables;
            char m_PredNetBoolVariables[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "animationgraph"
            // metadata: MNetworkChangeCallback "OnNetByteVarChanged"
            // metadata: MNetworkAlias "m_PredByteVariables"
            // m_PredNetByteVariables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::uint8_t> m_PredNetByteVariables;
            char m_PredNetByteVariables[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "animationgraph"
            // metadata: MNetworkChangeCallback "OnNetUInt16VarChanged"
            // metadata: MNetworkAlias "m_PredUInt16Variables"
            // m_PredNetUInt16Variables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::uint16_t> m_PredNetUInt16Variables;
            char m_PredNetUInt16Variables[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "animationgraph"
            // metadata: MNetworkChangeCallback "OnNetIntVarChanged"
            // metadata: MNetworkAlias "m_PredIntVariables"
            // m_PredNetIntVariables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::int32_t> m_PredNetIntVariables;
            char m_PredNetIntVariables[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "animationgraph"
            // metadata: MNetworkChangeCallback "OnNetUInt32VarChanged"
            // metadata: MNetworkAlias "m_PredUInt32Variables"
            // m_PredNetUInt32Variables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::uint32_t> m_PredNetUInt32Variables;
            char m_PredNetUInt32Variables[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "animationgraph"
            // metadata: MNetworkChangeCallback "OnNetUInt64VarChanged"
            // metadata: MNetworkAlias "m_PredUInt64Variables"
            // m_PredNetUInt64Variables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::uint64_t> m_PredNetUInt64Variables;
            char m_PredNetUInt64Variables[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "animationgraph"
            // metadata: MNetworkChangeCallback "OnNetFloatVarChanged"
            // metadata: MNetworkAlias "m_PredFloatVariables"
            // m_PredNetFloatVariables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<float> m_PredNetFloatVariables;
            char m_PredNetFloatVariables[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "animationgraph"
            // metadata: MNetworkChangeCallback "OnNetVectorVarChanged"
            // metadata: MNetworkAlias "m_PredVectorVariables"
            // m_PredNetVectorVariables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<Vector> m_PredNetVectorVariables;
            char m_PredNetVectorVariables[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "animationgraph"
            // metadata: MNetworkChangeCallback "OnNetQuaternionVarChanged"
            // metadata: MNetworkAlias "m_PredQuaternionVariables"
            // m_PredNetQuaternionVariables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<Quaternion> m_PredNetQuaternionVariables;
            char m_PredNetQuaternionVariables[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "animationgraph"
            // metadata: MNetworkChangeCallback "OnNetGlobalSymbolVarChanged"
            // metadata: MNetworkAlias "m_PredGlobalSymbolVariables"
            // m_PredNetGlobalSymbolVariables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CGlobalSymbol> m_PredNetGlobalSymbolVariables;
            char m_PredNetGlobalSymbolVariables[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "animationgraph"
            // metadata: MNetworkSendProxyRecipientsFilter
            // metadata: MNetworkChangeCallback "OnNetOOBoolVarChanged"
            // metadata: MNetworkAlias "m_OwnerOnlyPredNetBoolVariables"
            // m_OwnerOnlyPredNetBoolVariables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::uint32_t> m_OwnerOnlyPredNetBoolVariables;
            char m_OwnerOnlyPredNetBoolVariables[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "animationgraph"
            // metadata: MNetworkSendProxyRecipientsFilter
            // metadata: MNetworkChangeCallback "OnNetOOByteVarChanged"
            // metadata: MNetworkAlias "m_OwnerOnlyPredNetByteVariables"
            // m_OwnerOnlyPredNetByteVariables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::uint8_t> m_OwnerOnlyPredNetByteVariables;
            char m_OwnerOnlyPredNetByteVariables[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "animationgraph"
            // metadata: MNetworkSendProxyRecipientsFilter
            // metadata: MNetworkChangeCallback "OnNetOOUInt16VarChanged"
            // metadata: MNetworkAlias "m_OwnerOnlyPredNetUInt16Variables"
            // m_OwnerOnlyPredNetUInt16Variables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::uint16_t> m_OwnerOnlyPredNetUInt16Variables;
            char m_OwnerOnlyPredNetUInt16Variables[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "animationgraph"
            // metadata: MNetworkSendProxyRecipientsFilter
            // metadata: MNetworkChangeCallback "OnNetOOIntVarChanged"
            // metadata: MNetworkAlias "m_OwnerOnlyPredNetIntVariables"
            // m_OwnerOnlyPredNetIntVariables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::int32_t> m_OwnerOnlyPredNetIntVariables;
            char m_OwnerOnlyPredNetIntVariables[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "animationgraph"
            // metadata: MNetworkSendProxyRecipientsFilter
            // metadata: MNetworkChangeCallback "OnNetOOUInt32VarChanged"
            // metadata: MNetworkAlias "m_OwnerOnlyPredNetUInt32Variables"
            // m_OwnerOnlyPredNetUInt32Variables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::uint32_t> m_OwnerOnlyPredNetUInt32Variables;
            char m_OwnerOnlyPredNetUInt32Variables[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "animationgraph"
            // metadata: MNetworkSendProxyRecipientsFilter
            // metadata: MNetworkChangeCallback "OnNetOOUInt64VarChanged"
            // metadata: MNetworkAlias "m_OwnerOnlyPredNetUInt64Variables"
            // m_OwnerOnlyPredNetUInt64Variables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<std::uint64_t> m_OwnerOnlyPredNetUInt64Variables;
            char m_OwnerOnlyPredNetUInt64Variables[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "animationgraph"
            // metadata: MNetworkSendProxyRecipientsFilter
            // metadata: MNetworkChangeCallback "OnNetOOFloatVarChanged"
            // metadata: MNetworkAlias "m_OwnerOnlyPredNetFloatVariables"
            // m_OwnerOnlyPredNetFloatVariables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<float> m_OwnerOnlyPredNetFloatVariables;
            char m_OwnerOnlyPredNetFloatVariables[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "animationgraph"
            // metadata: MNetworkSendProxyRecipientsFilter
            // metadata: MNetworkChangeCallback "OnNetOOVectorVarChanged"
            // metadata: MNetworkAlias "m_OwnerOnlyPredNetVectorVariables"
            // m_OwnerOnlyPredNetVectorVariables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<Vector> m_OwnerOnlyPredNetVectorVariables;
            char m_OwnerOnlyPredNetVectorVariables[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "animationgraph"
            // metadata: MNetworkSendProxyRecipientsFilter
            // metadata: MNetworkChangeCallback "OnNetOOQuaternionVarChanged"
            // metadata: MNetworkAlias "m_OwnerOnlyPredNetQuaternionVariables"
            // m_OwnerOnlyPredNetQuaternionVariables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<Quaternion> m_OwnerOnlyPredNetQuaternionVariables;
            char m_OwnerOnlyPredNetQuaternionVariables[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "animationgraph"
            // metadata: MNetworkSendProxyRecipientsFilter
            // metadata: MNetworkChangeCallback "OnNetOOGlobalSymbolVarChanged"
            // metadata: MNetworkAlias "m_OwnerOnlyPredNetGlobalSymbolVariables"
            // m_OwnerOnlyPredNetGlobalSymbolVariables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CGlobalSymbol> m_OwnerOnlyPredNetGlobalSymbolVariables;
            char m_OwnerOnlyPredNetGlobalSymbolVariables[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "animationgraph"
            std::int32_t m_nBoolVariablesCount; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "animationgraph"
            std::int32_t m_nOwnerOnlyBoolVariablesCount; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "animationgraph"
            std::int32_t m_nRandomSeedOffset; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "animationgraph"
            // metadata: MNetworkChangeCallback "OnTeleportTimeChanged"
            float m_flLastTeleportTime; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CAnimGraphNetworkedVariables, m_PredNetBoolVariables) == 0x_);
        static_assert(offsetof(source2sdk::client::CAnimGraphNetworkedVariables, m_PredNetByteVariables) == 0x_);
        static_assert(offsetof(source2sdk::client::CAnimGraphNetworkedVariables, m_PredNetUInt16Variables) == 0x_);
        static_assert(offsetof(source2sdk::client::CAnimGraphNetworkedVariables, m_PredNetIntVariables) == 0x_);
        static_assert(offsetof(source2sdk::client::CAnimGraphNetworkedVariables, m_PredNetUInt32Variables) == 0x_);
        static_assert(offsetof(source2sdk::client::CAnimGraphNetworkedVariables, m_PredNetUInt64Variables) == 0x_);
        static_assert(offsetof(source2sdk::client::CAnimGraphNetworkedVariables, m_PredNetFloatVariables) == 0x_);
        static_assert(offsetof(source2sdk::client::CAnimGraphNetworkedVariables, m_PredNetVectorVariables) == 0x_);
        static_assert(offsetof(source2sdk::client::CAnimGraphNetworkedVariables, m_PredNetQuaternionVariables) == 0x_);
        static_assert(offsetof(source2sdk::client::CAnimGraphNetworkedVariables, m_PredNetGlobalSymbolVariables) == 0x_);
        static_assert(offsetof(source2sdk::client::CAnimGraphNetworkedVariables, m_OwnerOnlyPredNetBoolVariables) == 0x_);
        static_assert(offsetof(source2sdk::client::CAnimGraphNetworkedVariables, m_OwnerOnlyPredNetByteVariables) == 0x_);
        static_assert(offsetof(source2sdk::client::CAnimGraphNetworkedVariables, m_OwnerOnlyPredNetUInt16Variables) == 0x_);
        static_assert(offsetof(source2sdk::client::CAnimGraphNetworkedVariables, m_OwnerOnlyPredNetIntVariables) == 0x_);
        static_assert(offsetof(source2sdk::client::CAnimGraphNetworkedVariables, m_OwnerOnlyPredNetUInt32Variables) == 0x_);
        static_assert(offsetof(source2sdk::client::CAnimGraphNetworkedVariables, m_OwnerOnlyPredNetUInt64Variables) == 0x_);
        static_assert(offsetof(source2sdk::client::CAnimGraphNetworkedVariables, m_OwnerOnlyPredNetFloatVariables) == 0x_);
        static_assert(offsetof(source2sdk::client::CAnimGraphNetworkedVariables, m_OwnerOnlyPredNetVectorVariables) == 0x_);
        static_assert(offsetof(source2sdk::client::CAnimGraphNetworkedVariables, m_OwnerOnlyPredNetQuaternionVariables) == 0x_);
        static_assert(offsetof(source2sdk::client::CAnimGraphNetworkedVariables, m_OwnerOnlyPredNetGlobalSymbolVariables) == 0x_);
        static_assert(offsetof(source2sdk::client::CAnimGraphNetworkedVariables, m_nBoolVariablesCount) == 0x_);
        static_assert(offsetof(source2sdk::client::CAnimGraphNetworkedVariables, m_nOwnerOnlyBoolVariablesCount) == 0x_);
        static_assert(offsetof(source2sdk::client::CAnimGraphNetworkedVariables, m_nRandomSeedOffset) == 0x_);
        static_assert(offsetof(source2sdk::client::CAnimGraphNetworkedVariables, m_flLastTeleportTime) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CAnimGraphNetworkedVariables) == 0x_);
    };
};
